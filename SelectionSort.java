package arrays;
import java.util.Scanner;

public class SelectionSort {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		System.out.println("Enter the array: ");
		int arr[] = new int[n];
		for(int i=0;i<n;i++) {
			arr[i]= sc.nextInt();
		}
		int temp;
		for(int i=0;i<n-1;i++) {
			int min = i;
			for(int j=i;j<n;j++) {
				if(arr[j]<arr[min]) {
				min=j;
			}
		}
			temp = arr[i];
			arr[i] = arr[min];
			arr[min]= temp;

	}
		System.out.println("Sorted array is: ");
		for(int item: arr) {
			System.out.print(item + " ");
		}
		

}
}
