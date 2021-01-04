void main(){
  num staticVarible = 30;  // static datatype
  dynamic dynamicVarible = "James";
  print(staticVarible);
  print(dynamicVarible);
  
  // after i change value in dynamiv varible XD
  dynamicVarible = 3012;
  print(dynamicVarible);
  
  // constant
  const int constVarible = 30;
  // can not constVarible = constVarible + 10;
  print(constVarible);
  
  // final
  int finaldata = 10;
  final int finalVarible = finaldata + 10;
  print(finalVarible);
}
