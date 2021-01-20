//����Ĳ�ͬ���򷽷� 
#include<stdio.h>
#include<stdlib.h>
//ð������
void bubleSort(int data[], int n);
//��������
void quickSort(int data[], int low, int high);
int findPos(int data[], int low, int high);
//��������
void bInsertSort(int data[], int n);
//ϣ������
void shellSort(int data[], int n);
//ѡ������
void selectSort(int data[], int n);
//������
void heapSort(int data[], int n);
void swap(int data[], int i, int j);
void heapAdjust(int data[], int i, int n);
//�鲢����
void mergeSort(int data[], int first, int last);
void merge(int data[], int low, int mid, int high);
//��������
void radixSort(int data[], int n);
int getNumPos(int num, int pos);

int main() {
    int data[10] = {43, 65, 4, 23, 6, 98, 2, 65, 7, 79};
    int i;
    printf("ԭ������:");
    for(i=0;i<10;i++) {
        printf("%d    ", data[i]);
    }
    printf("\n");
    /*printf("ð������:");
    bubleSort(data, 10);
    for(i=0;i<10;i++) {
        printf("%d    ", data[i]);
    }
    printf("\n");
    printf("��������:");
    quickSort(data, 0, 9);
    for(i=0;i<10;i++) {
        printf("%d    ", data[i]);
    }
    printf("\n");
    printf("��������:");
    bInsertSort(data,10);
    for(i=0;i<10;i++) {
        printf("%d    ", data[i]);
    }
    printf("\n");
    printf("ϣ������:");
    shellSort(data, 10);
    for(i=0;i<10;i++) {
        printf("%d    ", data[i]);
    }
    printf("\n");
    printf("ѡ������:");
    selectSort(data, 10);
    for(i=0;i<10;i++) {
        printf("%d    ", data[i]);
    }
    printf("\n");
    int data[11] = {-1, 43, 65, 4, 23, 6, 98, 2, 65, 7, 79};
    int i;
    printf("ԭ������:");
    int data[11] = {-1, 43, 65, 4, 23, 6, 98, 2, 65, 7, 79};
    for(i=1;i<11;i++) {
        printf("%d    ", data[i]);
    }
    printf("\n");
    printf(" ������:");
    heapSort(data, 10);
    for(i=1;i<11;i++) {
        printf("%d    ", data[i]);
    }
    printf("\n");
    printf("�鲢����:");
    mergeSort(data, 0, 9);
    for(i=0;i<10;i++) {
        printf("%d    ", data[i]);
    }
    printf("\n");*/
    printf("��������:");
    radixSort(data, 10);
    for(i=0;i<10;i++) {
        printf("%d    ", data[i]);
    }
    printf("\n");
    return 0;
}

/*--------------------ð������---------------------*/
void bubleSort(int data[], int n) {
    int i,j,temp;
    //����forѭ����ÿ��ȡ��һ��Ԫ�ظ����������Ԫ�رȽ�
    //������Ԫ���ŵ����
    for(j=0;j<n-1;j++) {
        //��ѭ��һ�Σ����ź�һ�����������ں��棬
        //���ԱȽ�ǰ��n-j-1��Ԫ�ؼ���
        for(i=0;i<n-j-1;i++) {
            if(data[i]>data[i+1]) {
                temp = data[i];
                data[i] = data[i+1];
                data[i+1] = temp;
            }
        }
    }  
}

/*--------------------��������---------------------*/
int findPos(int data[], int low, int high) {
    //������t��Ԫ�ظϵ�t����ߣ�����t��Ԫ�ظϵ�t���ұ�
    int t = data[low];
    while(low < high) {
        while(low < high && data[high] >= t) {
            high--;
        }
        data[low] = data[high];
        while(low < high && data[low] <=t) {
            low++;
        }
        data[high] = data[low];
    }
    data[low] = t;
    //���ش�ʱt�������е�λ��
    return low;
}
//����������һ��Ԫ�أ��Դ��ڸ�Ԫ�غ�С�ڸ�Ԫ�ص������������������
//�ٶ����������Ϊ4�����飬������ֱ�����ÿ��ֻʣ��һ��Ԫ��Ϊֹ
void quickSort(int data[], int low, int high) {
    if(low > high) {
        return;
    }
    int pos = findPos(data, low, high);
    quickSort(data, low, pos-1);
    quickSort(data, pos+1, high); 
}

/*--------------------��������---------------------*/
void bInsertSort(int data[], int n) {
    int low,high,mid;
    int temp,i,j;
    for(i=1;i<n;i++) {
        low = 0;
        //��data[i]Ԫ�ز��뵽����ǰ��data[0-(i-1)]��
        temp =data[i];
        high = i-1;
        //��while���۰룬��Сdata[i]�ķ�Χ(�Ż��ֶ�)
        while(low <= high) {
            mid = (low+high)/2;
            if(data[mid] > temp) {
                high = mid-1;
            }
            else {
                low = mid+1;
            }
        }
        int j = i;
        //��data���Ѿ�����õ�����ĸ���Ԫ�رȽϣ�С�ķ�ǰ��
        while((j > low) && data[j-1] > temp) {
            data[j] = data[j-1];
            --j;
        }
        data[low] = temp;
    }
}

/*--------------------ϣ������---------------------*/
void shellSort(int * data, int n) {
    int step,i,j,key;
    //�����鰴��step���飬���϶��ֵ�ÿ��ֻʣ��һ��Ԫ��
    for(step=n/2;step>0;step/=2) {
        //��ÿ���е�Ԫ������С����ǰ
        for(i=step;i<n;i++) {
            key = data[i];
            for(j=i-step;j>=0 && key<data[j];j-=step) {
                data[j+step] = data[j];
            }
            //�������forѭ��һ�𣬽�����С��Ԫ�ػ��������ǰ��
            data[j+step] = key;
        }
    }
}

/*--------------------ѡ������---------------------*/
void selectSort(int data[], int n) {
    int i,j,mix,temp;
    //ÿ��ѭ�����飬�ҳ���С��Ԫ�أ�����ǰ�棬ǰ��ļ�Ϊ����õ�
    for(i=0;i<n-1;i++) {
        //������СԪ�ص��±�
        int mix = i;
        //������������СԪ��������Ƚϣ���������С��Ԫ�ص��±�
        for(j=i+1;j<n;j++) {
            if(data[j] < data[mix]) {
                mix = j;
            }
        }
        //������������бȼ����Ԫ�ػ�С���ͽ���
        if(i != mix) {
            temp = data[i];
            data[i] = data[mix];
            data[mix] = temp;
        }
    }
}

/*--------------------������---------------------*/
//��������������ɶ�������Ĭ�ϴ������data[1]��ʼ�ţ�data[0]��
//��Ч����
void heapSort(int data[], int n) {
    int i;
    //�Ƚ��������һ����ȫ������
    //��2/n��ʼ�����Ǵӵ����ڶ��Ž����ǰ��ʼ
    for(i=n/2;i>0;i--) {
        heapAdjust(data, i, n);
    }
    //ѭ��ÿ����㣬����Ľ�㽻�����Ѷ�
    for(i=n;i>1;i--) {
        swap(data, 1, i);
        //ÿ�ν����궼Ҫ��������������ʣ�µ����Ľ�㽻�����Ѷ�
        heapAdjust(data, 1, i-1);
    }
}
//��������
void swap(int data[], int i, int j) {
    int temp;
    temp = data[i];
    data[i] = data[j];
    data[j] = temp;
}
void heapAdjust(int data[], int i, int n) {
    int j, temp;
    //�����һ������Ԫ��������
    temp = data[i];
    //i��㣺2*i��i�������㣬2*i+1��i�����ҽ��
    //�ѽ��Ԫ�ش�Ľ�����ǰ��
    for(j=2*i;j<=n;j*=2) {
        if(j < n && data[j] < data[j+1]) {
            j++;
        }
        if(temp >= data[j]) {
            break;
        }
        data[i] = data[j];
        i = j;
    }
    data[i] = temp;
}

/*--------------------�鲢����---------------------*/
void mergeSort(int data[], int first, int last) {
    int mid = 0;
    //�����鲻ͣ�Ķ��ַ�������ϣ�ֱ��ÿ��ֻʣһ��Ԫ��
    if(first < last) {
        mid = (first+last)/2;
        mergeSort(data, first, mid);
        mergeSort(data, mid+1, last);
        merge(data, first, mid, last);
    }
    return;
}
void merge(int data[], int low, int mid, int high) {
    int i, k;
    //����һ����ʱ�����Ŵ����������������ź���֮�������
    int *temp = (int *)malloc((high-low+1)*sizeof(int));
    //����������ֳ���������
    int left_low = low;
    int left_high = mid;
    int right_low = mid+1;
    int right_high = high;
    //���������бȽ�����С����ǰ
    for(k=0;left_low<=left_high && right_low<=right_high;k++) {
        if(data[left_low]<=data[right_low]) {
            temp[k] = data[left_low++];
        }
        else{
            temp[k] = data[right_low++];
        }
    }
    //�����������ʣ��Ԫ��δ���򣬼ӵ���ʱ�����ĩβ
    if(left_low <= left_high) {
        for(i=left_low;i<=left_high;i++) {
            temp[k++] = data[i];
        }
    }
    //�����������ʣ��Ԫ��δ���򣬼ӵ���ʱ�����ĩβ
    if(right_low <= right_high) {
        for(i=right_low;i<=right_high;i++) {
            temp[k++] = data[i];
        }
    }
    //���ź����С����ת�Ƶ�ԭ������
    for(i=0;i<high-low+1;i++) {
        data[low+i] = temp[i];
    }
    free(temp);
    return;
}
/*--------------------��������---------------------*/
//�ú������������ҳ�num��posλ��������(���磺23�ĸ�λ��������3)
int getNumPos(int num, int pos) {
    int i;
    int temp = 1;
    for(i=0;i<pos-1;i++) {
        temp *= 10;
    }
    return (num / temp) % 10;
}
void radixSort(int data[], int n) {
    int i,j,k,pos,num,index;
    //�⼸�仰�Ǵ���һ����0-9(��)�� (n+1)(��)�����񣬵�һ�д���������0-9,
    //�ڶ����Ǹ��а�����Ԫ�ظ�����Ĭ��Ϊ0��
    int *radixArrays[10];
    for(i=0;i<10;i++) {
        radixArrays[i] = (int *)malloc(sizeof(int) * (n+1));
        radixArrays[i][0] = 0;
    }
    //pos���Ϊ31Ϊ����������ܳ��ܵ����Χ��
    for(pos=1;pos<=31;pos++) {
        //��forѭ���ǽ������Ԫ�ذ���λ��(pos)��ֵ�Ž�������
        for(i=0;i<n;i++) {
            num = getNumPos(data[i], pos);
            index = ++radixArrays[num][0];
            radixArrays[num][index] = data[i];
        }
        //��forѭ���ǽ������forѭ���Ѿ�����ĳ��λ��(pos)���кõ�Ԫ�ش�������
        for(i=0,j=0;i<10;i++) {
            for(k=1;k<=radixArrays[i][0];k++) {
                data[j++] = radixArrays[i][k];
            }
            //��������Ա���¸�λ������
            radixArrays[i][0] = 0;
        }
    }
}
