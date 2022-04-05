#define MAX 8//Byte = 8 bits
void func_signed_mag_addition(int a[], int b[], int result[]){
	//(+a) + (+b) ==> a chance for overflow
	//(+a) + (-b) ==> (+a) - (+b) ==> return func_signed_mag_subtraction(a, b, result)
	//(-a) + (+b) ==> (+b) - (+a) ==> return func_signed_mag_subtraction(a, b, result)
  //(-a) + (-b) ==> - (a + b) ==> a chance for overflow
}
void func_signed_mag_subtraction(int a[], int b[], int result[]){
  //(+a) - (+b) //note about the last borrow! may be a < b. Then another subtraction is needed!
  //(-a) - (+b) ==> - ( a + b) ==> return (-) func_signed_mag_addition(a, b, result)
  //(+a) - (-b) ==>  a + b ==> return func_signed_mag_addition(a, b, result)
  //(-a) - (-b) ==> b - a //note about the last borrow! may be b < a. Then another subtraction is needed!

}
