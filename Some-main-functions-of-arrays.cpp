//MERGE TWO SORTED ARRAYS
void merge(int arr1[], int arr2[], int n1, int n2)
{
	int i=0, j=0, p, arr3[100], n3=0;
   while (i<n1 && j<n2)
   {
   	if (arr1[i]<=arr2[j])
      	arr3[n3++] = arr1[i++];
      else
      	arr3[n3++] = arr2[j++];
   }
   if (i<n1)
   	for (p=i; p<n1; p++)
      	arr3[n3++] = arr1[p];
   else
   	for (p=j; p<n2; p++)
      	arr3[n3++] = arr2[p];
	cout<<"\nThe merged array:\n";
   for (i=0; i<n3; i++)
   	cout<<arr3[i]<<" ";
}
//INSERTION SORT (ASCENDING)
void insertionSortAsc(int arr[], int n)
{
	int i, j, term;
	for (i=1; i<n; i++)
   {
   	term = arr[i];
      for (j=i; j>0 && arr[j-1]>term; j--)
      	arr[j] = arr[j-1];
   	arr[j] = term;
   }
}

//INSERTION SORT (DESCENDING)
void insertionSortDesc(int arr[],int n)
{
	int i, j, term;
   for (i=n-2; i>=0; i--)
   {
   	term = arr[i];
      for (j=i; j<n && arr[j+1]>term; j++)
      	arr[j] = arr[j+1];
      arr[j] = term;
   }
}

//BINARY SEARCH OF NUMBERS
int binarySearch(int srch, int arr[], int n)
{
	int start = 0, end=n-1, pos=-1, mid;
   while (start <= end)
   {
   	mid = (start+end)/2;
      if(arr[mid] == srch)
      {
       	pos=mid+1;
        	break;
      }
   	else if (arr[mid] < srch)
    		start = mid+1;
	   else
    	  	end = mid-1;
   }
   return pos;
}

//BUBBLE SORT
void bubbleSort(int arr[], int n)
{
	int i, j, temp;
   for (i=0; i<n; i++)
   	for (j=0; j<n-1-i; j++)
      	if (arr[j]>arr[j+1])
         {
         	temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
         }
}

//SELECTION SORT
void selectionSort(int arr[], int n)
{
	int i, j, temp, minindx;
   for (i=0; i<n; i++)
   {
   	minindx = i;
      for (j=i+1; j<n; j++)
      	if (arr[j] < arr[minindx])
         	minindx = j;
      temp = arr[minindx];
      arr[minindx] = arr[i];
      arr[i] = temp;
   }
}

//PRODUCT OF TWO MATRICES
void multiplymatrices (int arr1[][10], int r1, int c1, int arr2[][10], int r2, int c2)
{
	int i, j, k, arr3[10][10];
   for (i=0; i<r1; i++)
   	for (j=0; j<c2; j++)
   	{
      	arr3[i][j] = 0;
      	for (k=0; k<c1; k++)
      		arr3[i][j] += arr1[i][k] * arr2[k][j];
      }
   cout<<"\nThe product of the two matrices:\n";
   display(arr3, r1, c2);
}

//BUBBLE SORT OF STRINGS
void sortstrings(char str[][30], int n)
{
	int i,j;
   for (i=0; i<n; i++)
   	for (j=0; j<n-1-i; j++)
         if (strcmpi(str[j],str[j+1])>0)
         {
         	strcpy(temp, str[j]);
            strcpy(str[j], str[j+1]);
            strcpy(str[j+1], temp);
         }
}

//BINARY SEARCH OF STRINGS
void binarySearchOfStrings(char str[][30],char wrd[],int n)
{
	int start,end,mid,pos;
   start = 0;
   end = n-1;
   while (start<=end)
   {
   	mid = (end+start)/2;
      if (strcmpi(str[mid],wrd)==0)
      {
      	pos = mid+1;
         break;
      }
      else if (strcmpi(str[mid],wrd)>0)
      	end = mid-1;
      else
      	start = mid+1;
   }

   if (pos==-1)
   	cout<<"\nString NOT found!";
   else
   	cout<<"\nThe string is in the position: "<<pos;
}
