 //#include <stdio.h>
// //함수의 호출
// void draw_line (char ch, int len)
// {
//     int i;
//     for(i=0; i<len; i++)
//     printf("%c",ch);
//     printf("\n");
// }
// int main (void){
//     int amount = 10;
//     int price = 100;
//     int total = amount *price;
//     int width;
//     draw_line('-',30);
//     printf("수량    단가     합계 \n");
//     width = 3 + 8 + 8 + 2;
//     draw_line('*',width);
//     printf("%3d %8d %8d\n", amount, price, total);
//     draw_line('-', 30);
//     return 0;
// }

//매개변수가 있는 print_sum
// #include <stdio.h>
// void print_sum(int count){
//     int i;
//     int num;
//     int sum=0; //합계
     
//     printf("%d개의 정수", count);
//     for(i=0; i<count; i++){
//         scanf("%d", &num);
//         sum +=num;
//     }
//     printf("합계 : %d\n", sum);
// }
//     int main(void)
//     {
//         int i;
//         for(i=3; i<10; i+=2)
//         {
//             print_sum(i); //반복문 안에서 함수 호출
//         }
//         return 0;
//     }

//펙토리얼값
// #include<stdio.h>
// int get_factorial(int num){
//     int i;
//     int result=1;
//     for(i=1; i<=num; i++) //num! 값
//     result *= i;
//     return result;

// }
// int main(void){
//     int i;
//     int fact;

//     for(i=1; i<=5; i++)
//     {
//         fact =get_factorial(i);//get_factorial(i)값을 리턴
//         printf("%2d! = %3d\n", i , fact);
//     }
//     get_factorial(5);
//     return 0;
// }

// //원의 면적구하기
// #include<stdio.h>
// double get_area(double radius){
//     const double PI = 3.14;
//     return  PI * radius * radius;
// }
// int main(void){
//     int i;
//     for(i=1; i<=5; i++)
//     {
//         printf("반지름이 %d일때 원의 면적: %.2f\n", i, get_area(i));
//     }
//     return 0;
// }


// //최대 공약수 구하기
// #include<stdio.h>
// int get_gcd(int x, int y)
// {
//     int r;
//     while (y != 0) {
//         r =x % y;
//         x=y;
//         y=r;
//     }    return x;
// }
// int main(void)
// {
//     int x, y;
//     int gcd;

//     while(1){
//         printf("정수 2개를 입력");
//         scanf("%d %d", &x, &y);
//         if(x==0 && y==0) //&& 모두 참, || 하나라도 참
//         break;
//         gcd = get_gcd(x, y); //get_gcd(x,y)값을 리턴
//         printf("%d와 %d의 GCD: %d\n", x, y, gcd);

//     }
//     return 0;
// }

//3개 정수중 가장 큰 값을 구하는 get_max 함수의 사용 예
// #include<stdio.h>
// int get_max(int a, int b, int c)
// {
//     int max = a > b ? a : b; //조건 ? 참일경우 실행할 내용 : 거짓일경우 실행할 내용;
//     max = c > max ? c : max;
//     return max;

// }
// int main(void)
// {
//     int x, y, z;
//     while(1)
//     {
//         printf("정수 3개를 입력하세요");
//         scanf("%d %d %d", &x,&y,&z);

//         if (x == 0 && y == 0 && z == 0)
//         break;
//         printf("최댓값: %d\n", get_max(x,y,z));

//     }
//     return 0;
// }

// //draw_line , get_area 함수 선언
// #include<stdio.h>
// void draw_line(char ch, int len);
// double get_area(double radius);

// int main(void)
// {
//     int i;
//     draw_line('-', 40);
//     for(i=5; i<20; i+=5)
//     {
//         printf("반지름이 %d일때 원의 면적: %.2f\n", i, get_area(i));
//     }

//     draw_line('-', 40);
//     return 0;
// }
// double get_area(double radius) //원의 면적을 구하는 함수
// {
//     const double PI = 3.14;
//     return PI * radius * radius;

// }
// void draw_line(char ch, int len) {
//     int i;
//     for(i=0; i< len; i++)
//     printf("%c", ch);
//     printf("\n");
// }

// //지역 변수 생성 소멸
// #include<stdio.h>
// void dummy()
// {
//  int y = 456;  //함수가 호출될 때마다 매번 다시 생성한다.
// printf("y = %d\n", y); 
// y--;   //감소된 y는 함수가 리턴할 때 소멸된다.
// } 

// int main(void)
// {
//     int i;
//     for(i=0; i<3; i++)
//     dummy();
//     for(i=0; i<3; i++)
//     {
//         int x=123; //for의 각 반복회차가 시작될 때마다 생성된다.
//         printf("x = %d\n", x);
//         x++; //증가된 x는 블록의 끝을 만나면 소멸된다.

//     }
//     return 0;
// }

// // 지역 변수로서의 매개변수
// #include<stdio.h>
// void double_it(int num)
// {
//     num *= 2; //매개변수 num은 함수가 리턴할 때 소멸된다.
// }
// int double_this(int num)
// {
//     return num *2; //2배로 만든 값을 리턴한다.
// }
// int main(void)
// {
//     int x=5;
//     double_it(x); //x는 변경되지 않는다.
//     printf("double_it 호출 후 : x = %d\n", x);

//     x= double_this(x); //함수의 리턴값을 받아와서 x에 저장한다.
//     printf("double_this 호출 후 : x = %d\n", x);

//     return 0;
// }

// //지역 변수의 사용 범위
// #include<stdio.h>
// void test_local(void);
// int main(void)
// {
//     int num = 0; //main의 num 선언
//     printf("main: num = %d\n", num); //main의 num 사용
//     test_local();
//     return 0;
// }
// void test_local(void)
// {
//     int num = 100; //test_local 의 num선언
//     num ++; // num 사용
//     printf("test_local: num = %d\n", num); //num 사용
// }

//배열의 선언, 배열의 바이트 크기와 크기 구하기
// #include<stdio.h>
// int main(void)
// {
//     int arr[5]; //크기가 5인 배열 선언
//     int byte_size = 0; //바이트의 크기의 저장할 변수
//     int size = 0; //배열의 바이트 크기
//     int i;

//     byte_size=sizeof(arr); //배열의 바이트 크기
//     printf("배열의 바이트 크기: %d\n", byte_size);

//     size = sizeof(arr) / sizeof(arr[0]); //배열의 크기 (원소의 개수)
//     printf("배열의 크기 : %d\n", size);

//     for(i=0; i<size; i++);
//     arr[i]=0;
//     return 0;
// }

// //매크로 상수 배열의 크기 선언
// #include<stdio.h>
// #define arr_size 5 //배열의 크기로 사용할 매크로 상수의 정의
// int main(void){
// int arr[arr_size];  //매크로 상수로 배열의 크기 지정
// int i;

// for (i=0; i<arr_size; i++) //배열의 크기
// arr[i] =0;
// printf("arr = ");
// for(i=0; i<arr_size; i++)
// printf("%d", arr[i]);
// printf("\n");

// return 0;
// }

// //배열의 초기화
// #include<stdio.h>
// int main(void){
//     int arr[5] = {1,2,3,4,5}; //배열의 크기만큼 초기값을 지정
//     int i;

//     printf("arr= ")
//     for(i=0; i<arr; i++)
//     printf("%d", arr[i]);
//     printf("\n");

//     return 0;
// }

// //배열의 크기보다 초기값을 적게 지정
// #include <stdio.h>
// int main(void)
// {
//     int amount[5] ={1,1,5,0,0};
//     int price[5] = {0}; //배열 전체를 0으로 초기화
//     int i;

//     printf("amount =");
//     for(i=0; i<5; i++)
//     printf("%d", amount[i]);
//     printf("\n");

//     printf("price = ");
//     for(i=0; i<5; i++)
//     printf("%d", price[i]);
//     printf("\n");

//     return 0;

// }

// //배열 원소의 사용 
// #include<stdio.h>
// #define arr_size 5

// int add(int a, int b) //int형의 매개변수를 갖는 함수
// {
//     return a + b; 

// }
// int main(void)
// {
//     int arr[arr_size] = {0}; //배열 전체를 0으로 초기화
//     int i;

//     arr[0] = 5;
//     arr[1] = arr[0] + 10;
//     arr[2] = add(arr[0], arr[1]); //함수의 인자로 전달
//     printf("정수를 2개 입력");
//     scanf("%d %d", &arr[3], &arr[4]);  //배열의 원소에 값을 입력받음

//     for(i=0; i<arr_size; i++)
//     printf("%d", arr[i]);
//     printf("\n");

//     return 0;

// // 잘못된 인덱스
// #include<stdio.h>
// int main(void)
// {
//     int arr[5]= {10, 20, 30, 40, 50};
//     int i;

//     printf("arr= ");
//     for(i=0; i<5; i++)
//     printf("%d", arr[i]);
//     printf("\n");

//     printf("arr[5] = %d\n", arr[5]); //할당되자 않은 메모리 읽어옴
//     arr[5] = 100; //할당되지 않은 메모리 변경
//     return 0;
// }

// //배열의 복사
// #include<stdio.h>
// int main(void)
// {
//     int x[5] = {10, 20, 30, 40, 50};
//     int y[5] = {0};
//     int i;

//     //y=x; 배열을 다른 배열에 대입하면 컴파일 에러

//     for (i=0; i<5; i++)
//     y[i]=x[i]; //배열의 원소끼리 1:1대입

//     printf("y = ");
//     for(i=0; i<5; i++)
//     printf("%d", y[i]);
//     printf("\n");
//     return 0;
// }

// //배열의 비교
// #include<stdio.h>
// int main(void)
// {
//     int x[5] = {10,20,30,40,50};
//     int y[5] = {10,20,30,40,50};
//     int i;
//     int is_equal;

//     if(x == y) //x와y의 주소가 같은지 비교
//     printf("두 배열의 주소가 같습니다.\n");

//     is_equal = 1;  //내용이 같은지 나타나는 변수
//     for(i=0; i<5; i++){
//     if (x[i] != y[i]) { //배열의 원소끼리 비교
//         is_equal =0; //서로 다른 원소가 있으면 더이상 비교할 필요가 없다
//         break;
//     }
// }
// if (is_equal ==1) //모든 원소가 같으면 1
// printf("두 배열의 내용이 같다\n");

// return 0; 
// }

// //배열의 탐색
// #include<stdio.h>
// int main(void)
// {
//     int data[] = {70, 34, 52, 15, 63, 15, 25};
//     int size;
//     int key, i;

//     size = sizeof(data) / sizeof(data[0]);
//     printf("data = 0;")

// }
//포인터
// #include<stdio.h>
// int main(void)
// {
//     int*p;
//     double *pd;
//     char *ch;

//     printf("sizeof(pi) = %zd\n", sizeof(pi));
//     printf("sizeof(pd) = %zd\n", sizeof(pd));
//     printf("sizeof(pc) = %zd\n", sizeof(pc));
//     printf("sizeof(int*) = %zd\n", sizeof(double*));
//     printf("sizeof(char*) = %zd\n", sizeof(char*));
//     return 0;

// }
//포인터의 선언 및 초기화
// #include<stdio.h>
// int main(void){
//     int *p2 = (int*)0x12345678; //실행 에러

//     int a =10;
//     int *p3 = &a;  //a의 주소를 구해서 p를 초기화 한다. 
//     int *p4 =0; //어떤 주소로 초기화할지 모름
//     int *p5 =NULL; //0대신 

//     printf("p2 = %p\n", p2);
//     printf("p3 = %p\n", p3);
//     printf("p4 = %p\n", p4);
//     printf("p5 = %p\n", p5);
  
//   return 0;

// }

//포인터의 사용
// #include<stdio.h>
// int main(void)
// {
//     int x = 10;
//     int *p =&x; // p는 a의 주소로 초기화 한다. 
//     printf(" x = %d\n", x);
//     printf("&x = %p\n", &x); //x는 주소값이므로 %p로 출력

//     printf("p = %p\n", p);
//     printf("*p = %d\n", *p); //int형으로 %d로 출력
//     printf("%*p =%p\n", &p); //포인터도 변수로 주소가 있다.

//     *p =20; //x =20;
//     printf("*p =%d\n", *p); //printf("*p= %d\n",x)로 수행
//     return 0;
// } 

// #include<stdio.h>
// void test1(int x)//x로 초기화
// {
//     x=20; //test1 의 x
// }
// void test2(int *p) //p는 main의 x주소
// {
//     *p = 20;
// }
// int main(void){
//     int x = 10;
//     test1(x);
//     printf("test1 호출 후 x= %d\n", x ); //x값은 변경 안됨
    
//     test2(&x);
//     printf("test2를 호출 후 x =%d\n", x); //x값은 변경
//     return 0;
// }
//const 포인터의 의미

// #include<stdio.h>
// int main(void){
//     int a =10, b =20;

//     const int *p1 = &a; //읽기전용
//     int *const p2 = &a; //a전용
//     const int *const p3 = &a; //읽기 전용, a전용

//     printf("*p1 = %d\n", *p1); //a를 읽음
//     p1 = &b;//p1은 b 다른 변수를 가리킬수는 있음 그래서 b
//     printf("*p1 = %d\n", *p1); //b를 읽는다 

//     *p2 = 100; //변수 값을 변경가능
//     printf("*p2 = %d\n", *p2); 
    
//     printf("*p3 = %d\n", *p3);
//     return 0;
// }
//포인터 연산의 결과 
// #include<stdio.h>
// int main(void){
//     int *p = (int *)0x100; //포인터 연산을 확인하기 위해 절대 주소를 대입
//     double *q = (double*)0x100; 
//     char *r = (char*)0x100;

//     printf("int * : %p, %p ,%p\n", p , p+1, p +2); //4바이트 차이
//     printf("double* : %p, %p, %p\n", q ,q+1,q+2); //8바이트 차이
//     printf("char* : %p , %p, %p\n", r , r+1, r+2); //1바이트 차이

//     return 0;
// }
//포인터 + 정수
// #include<stdio.h>
// int main(void)
// {
//     int arr[5] = { 1, 2, 3,4,5};
//     int *p= &arr[0]; //arr{0}의 주소를 p에 저장

//     int i;
//     for(i=0; i<5; i++)
//     {
//         printf("p + %d = %p, ", i, p+i); //arr[i]주소
//         printf("*(p + %d) = %d\n", i ,*(p + i));  //arr{i} 출력 , 변수 값

//     }
//     return 0;
// }

//배열의 0번 원소를 가리키는 포인터와 '포인터 + 정수'
// #include <stdio.h>
// int main(void){
//     int arr[5] = {1, 2, 3, 4, 5};
//     int *p = &arr[0]; //arr의 주소를 p에 저장할 수 있다.
//     int i;
//     for(i = 0; i< 5; i ++)
//     {
//         printf("p + %d = %p",i , p+i); //arr[i]의 주소를 출력
//         printf("*(p + %d) = %d\n", i , *(p+i)); //arr[i]를 출력

//     }
//     return 0; 
// }

// 배열의 0번 원소를 가리키는 포인터에 증감 연산을 수행
// #include<stdio.h>
// int main(void)
// {
//     int arr[5] = { 1 ,2 ,3,4,5};
//     int *p = &arr[0]; //arr[0]의 주소를 p에 저장
//     int i;

//     for(i=0; i< 5; i++, p++) // p는 &arr[0]-[4]의 값이 된다.
//     {
//         printf("p = %p", p); //p가 가리키는 원소가 계속 바뀐다.
//         printf("*p = %d\n", *p); //p가 역참조하는 원소도 계속 바뀐다.
//     }
//     return 0;

// }

// //포인터를 배열인 것처럼 사용
// #include<stdio.h>
// int main()
// {
//     int arr[5] = {1,2,3,4,5};
//     int *p =arr; //&arr[0]
//     int i;

//     for(i=0; i<5; i++)
//     printf("p[%d] = %d\n", i, p[i]);  //p를 배열 이름인 것처럼 사용한다.
//     return 0;
// }
// 배열과 포인터의 차이점
// #include<stdio.h>
// int main(void)
// {
//     int x[5] = {1,2,3,4,5,};
//     int y[5];
//     int *p=x; //x[0]
//     int i;

//     for(i=0; i<5; i++)
//     printf("%d",p[i]);
//     printf("\n");
    
//     p=y; //p는 y[0]를 가리킨다.
//     for(i =0; i<5; i++)
//     p[i]=x[i]; //y배열에 x배열을 복사

//     for(i =0; i< 5; i++, p++)
//     printf("%d", *p);
//     printf("\n");
//     return 0; 
// }

// //포인터 배열의 선언 및 사용
// #include <stdio.h>
// int main(void){
//     int a, b, c, d, e;
//     int *arr[5] = {&a,&b,&c, &d, &e}; //포인터 배열
//     int i;

//     for(i=0; i< 5; i++)
//     {
//         *arr[i] = i;
//         printf("%d", *arr[i]); //arr[i]는 포인터

//     }
//     printf("\n");
//     return 0;
// }

// //배열에 대한 포인터의 선언 및 사용
// #include<stdio.h>
// int main(void)
// {
//     int data[3][5] = {
//         {1,2,3,4,5},
//         {6,7,8,9,10},
//         {11,12,13,14,15}
//     };
//     int(*p)[5] = &data[0]; //int[5] 배열에 대한 포인터
//     int i, j;

//     for(i=0; i<3; i++){
//         for(j=0; j<5; j++)
//         printf("%2d", p[i][j]); //2차원 배열인 것처럼 사용
//         printf("\n");
//     }
//     return 0;
// }

// // 포인터에 의한 전달 방법으로 구현한 swap 함수
// #include<stdio.h>
// void swap (int *x, int *y);
// int main(void)
// {
//     int a =3, b= 7;
//     printf("a = %d, b=%d\n", a, b);
//     swap(&a, &b); //포인터에 의한 전달
//     printf("a = %d, b=%d\n", a, b);
// }
// void swap (int *x,int*y) //x,y는 인자의 주소이다.
// {
//     int temp = *x; //x가 가리키는 변수의 값을 temp에 저장한다.
//     *x=*y; //y가 가리키는 변수의 값을 x가 가리키는 변수에 저장
//     *y=temp; //temp를 y가 가리키는 변수에 저장한다.
// }

// //함수의 처리 결과를 매개변수로 전달하는 getsumproduct
// #include<stdio.h>
// void get_sum_product(int x, int y, int *sum ,int *product); 
// int main(void)
// {
//     int result1, result2;
// //결과를 받아올 변수의 주소를 전달한다.
//     get_sum_product(10, 20, &result1, &result2);
//     printf("sum = %d, product = %d\n", result1, result2);
//     return 0;

// }
// //처리 결과를 저장할 변수를 가리키는 포인터형으로 매개변수를 선언한다.
// void get_sum_product(int x, int y, int *sum, int *product)
// {
//     //포인터형의 매개변수가 가리키는 곳에 처리 결과를 저장한다.
//     *sum = x + y;
//     *product = x *y;
// }

// //배열을 입력 매개변수로 사용하는 함수
// #include<stdio.h>
// #define SIZE 10
// void copy_array (const int source[], int target[], int size);
// void print_array(const int arr[], int size);

// int main(void)
// {
//     int x[SIZE] = { 10, 20, 30, 40, 50};
//     int y[SIZE] = {0};

//     printf("x =");
//     print_array(x, SIZE);
//     copy_array(x , y, SIZE);
//     printf("y = ");
//     print_array(y,SIZE);
//     return 0;
// }
// void copy_array(const int source[], int target[], int size)
// {
//     int i;
//     for(i =0; i<size; i++)
//     target[i] =source[i];
// }
// void print_array(const int arr[], int size) 
// {
//     int i;
//     for(i=0; i<size; i++)
//     printf("%d", arr[i]);
//     printf("\n");
// }