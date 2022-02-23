<?php

echo"<u><b>Practical 2</b></u>";

// Decision Making Control Statement

echo"<br><br><u>2.a</u><br><br>";

echo"If Statement<br>";

$name = "Snehal";
if($name == "Snehal"){
    echo"Hello Snehal..!!<br><br>";
}

echo"<u>2.b</u><br><br>";

echo"If else Statement<br>";
$age = 15;
if($age>=18){
    echo"You are eligible for voting";
}
else{
    echo"You are not eligible for voting";
}

echo"<br><br><u>2.c</u><br><br>";

echo"Switch Statement<br>";
$month = 2;
switch($month)
{
    case 1:
        echo"Its January, You have to set your goals";
        break;
    case 2:
        echo"Its February, You have to meet your doctor this month";
        break;
    case 3:
        echo"Its March, Give time for your family ";
        break;
    case 4:
        echo"Its April, Plan a summer vaction ";
        break;
    case 5:
        echo"Its May, Lets get back to your project ";
        break;
    case 6:
        echo"Its June,  Decide the project ";
        break;
    case 7:
        echo"Its July, Plan your work ";
        break;
    case 8:
        echo"Its August, Start your work ";
        break;
        default:
    case 9:
        echo"Its September, Complete the work ";
        break;
    case 10:
         echo"Its October, Arrange the completed work ";
        break;
    case 11:
         echo"Its November, Submit you Work ";
         break;
    case 12:
        echo"Its December, This is Chrishmas and New Year month ";
        break;
    }
?>