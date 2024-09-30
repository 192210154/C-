# include <iostream>
int main ( )
{
int x [20];
int i, j, n, loc, data;
sdt::cout<<“Enter the no. of elements”;
cin >> n;
for (i = 0; i < n; i ++)
{
cout << “Enter value”;
cin >> x [ i ];
}
cout << “Enter the location to be deleted”;
cin >> loc;
if (loc ! = 0)
{
data = x [loc ];
for {j = loc; j < n - 1; j ++ )
x [ j ] = x [ j + 1];
}
n = n - 1;
cout << “Elements after deletion”;
for ( i = 0; i < n; i ++)
cout << x [ i ];
}

