function quickSort(arr, i, j) {
    if (i < j) {
        let left = i;
        let right = j;
        let pivot = arr[left];
        while (i < j) {
            while (arr[j] >= pivot && i < j) {
                j--;
            }
            if (i < j) {
                arr[i] = arr[j];
                i++;
            }
            while (arr[i] <= pivot && i < j) {  // 从前往后找比基准大的数
                i++;
            }
            if (i < j) {
                arr[j] = arr[i];
                j--;
            }
        }
        arr[i] = pivot;
        quickSort(arr, left, i - 1);
        quickSort(arr, i + 1, right);
        return arr;
    }
}
let arr = [2, 10, 4, 1, 0, 9, 5, 2];
console.log(quickSort(arr, 0, arr.length - 1));