int  main()
{ 
  int n, i;
  int *my_array = (int *)malloc(n * sizeof(int)+1);  
    
  if (my_array == NULL)
  {
    exit(0);
  }
    
	printf("Size: %d", sizeof(my_array));
  printf("Size of array: ");
  scanf("%d", &n);
  
  *my_array = 1;
  for(i =1; i<n; i++)
  {
    *(my_array+i) = i*100;
  }

  printArr(my_array, n);
 
  return 0;
}
