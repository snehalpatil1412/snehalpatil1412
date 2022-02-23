<?php

echo"<u><b>Practical 1</b></u><br><br>";
echo"<u>1.b</u><br><br>";
echo"Welcome to PHP<br><br>";

$num1 = 10;
$num2 = 5;

echo"<u>1.c</u><br><br>";
echo"num1 = $num1 and num2 = $num2 <br><br>";

// Arithmetic Operator
echo "Arithmetic Operators<br><br>";
echo "Addition of $num1 and $num2 is: ".($num1+$num2)."<br>";
echo "Subtraction of $num1 and $num2 is: ".($num1-$num2)."<br>";
echo "Multiplication of $num1 and $num2 is: ".($num1*$num2)."<br>";
echo "Division of $num1 and $num2 is: ".($num1/$num2)."<br>";
echo "Modulus of $num1 and $num2 is: ".($num1%$num2)."<br>";

// Assignment Operator
echo "<br><br>Assignment Operators<br><br>";
echo"+= of $num1 and $num2 is: ".($num1+=$num2)."<br>";
echo"-= of $num1 and $num2 is: ".($num1-=$num2)."<br>";
echo"*= of $num1 and $num2 is: ".($num1*=$num2)."<br>";
echo"/= of $num1 and $num2 is: ".($num1/=$num2)."<br>";
echo"%= of $num1 and $num2 is: ".($num1%=$num2)."<br>";

// Comparison Operators
echo"<br><br>Comparison Operators<br><br>";
echo"a==b,the result is :";
echo var_dump($num1==$num2);
echo"<br>";
echo"a===b,the result is :";
echo var_dump($num1===$num2);
echo"<br>";
echo"a!=b,the result is :";
echo var_dump($num1!=$num2);
echo"<br>";
echo"a<>b,the result is :";
echo var_dump($num1<>$num2);
echo"<br>";
echo"a!==b,the result is :";
echo var_dump($num1!==$num2);
echo"<br>";
echo"a>b,the result is :";
echo var_dump($num1>$num2);
echo"<br>";
echo"a>=b,the result is :";
echo var_dump($num1>=$num2);
echo"<br>";
echo"a<b,the result is :";
echo var_dump($num1<$num2);
echo"<br>";
echo"a<=b,the result is :";
echo var_dump($num1<=$num2);
echo"<br>";

// Logical Operator
$num1 = true;
$num2 = false;

echo"<br><br>Logical Operators<br><br>";
echo"num1 = true and num2= false<br><br> ";
echo"a and b OR a && b , the result is:";
echo var_dump($num1 and $num2);
echo "<br>"; 
echo"a or b OR a || b , the result is:";
echo var_dump($num1 or $num2);
echo "<br>"; 
echo"!a, the result is:";
echo var_dump(!$num2);
echo "<br>"; 



?>