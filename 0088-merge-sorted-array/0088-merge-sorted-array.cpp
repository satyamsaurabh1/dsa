class Solution {
public:
    void merge(vector<int>& arr1, int n1, vector<int>& arr2, int n2) {
        vector<int> arr3(n1 + n2);
        int i = 0; 
        int j = 0;
        int k = 0;
        while(i < n1 && j < n2){
            if(arr1[i]<arr2[j]){
                arr3[k++] = arr1[i++];
            }
            else{
                arr3[k++] = arr2[j++];
            }

        }
        while(i<n1)
            arr3[k++] = arr1[i++];
        while(j<n2)
            arr3[k++] = arr2[j++];
        //merged array back to nums1
        for(int i = 0; i < n1+n2 ;i++){
            arr1[i] = arr3[i];
        }
    }
};