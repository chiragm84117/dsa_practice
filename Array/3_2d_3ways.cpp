// first way:

// int a[3][4]={{1,2,3,4},{5,6,7,8},{10,11,12,14}};

// second method:

// int *a[3];
// a[0]=new int[4];
// a[1]=new int[4];;
// a[2]=new int[4];

// third method:

// int **a[3];
// a[0]=new int*[4];
// a[1]=new int*[4];
// a[2]=new int*[4];
 

// //this code will be same for al the method  
// for(i=0;i<3;i++){
//     for(j=0;j<4;j++){
//         scanf("%d",a[i][j]);
//     }
// }
