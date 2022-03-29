/*
//1. Ways to write in javascript
document.write("this is document.write"); //helps in writing things on the document.
console.log("hello world");
alert("arctic monkeys");
// 2. CONSOLE API MODEL - application programming interface
console.log("Hey everyone!", 22, "Can type multiple things in console.log");
console.warn("this is a warning - console.warn");
console.error("this is an error - console.error");
//consle.clear() clears console in the browser
console.assert(4 == 6); //console.assert checks condition
console.assert(6 > 4); //shows message in console only when it fails
document.write("this is document.write"); //helps in writing things on the document.
*/


/*
//3. Variables in javascript 
// What are variables ? Containers to store data values.
var number1 = 34;
var number2 = 56;
console.log(number1 + number2); //addition in console
*/


/*
//4. Data types in java script\
//Numbers
var num1= 455;
var num2 = 56.7;
//Strings
var str1 = "This is a string in double q"; //string in double quotes
var str2 = 'This is a string in single q'; //string in single quotes
//Objects (Like dictionary in python - key-value pairs)
var marks ={
    ravi : 34,
    shyam : 78,
    anishka : 99
}
//Boolean
var a = true;
var b = false;
console.log(marks);
console.log(a,b);
//Undefined and null
var und = undefined;
var und1; //a variable which has not been assigned value appears as undefined.
console.log(und); //printing variable und
console.log(und1); //printing variable und1
var n = null; //assigning null value
console.log(n);
    At a very high level, there are two types of data types in 
    Javascript.
    1. Primitive: undefined,null,number,string,boolean,symbol
    2. Reference data types: Arrays and Objects
//Arrays - collection of elements.
var arr = [1,2,3,4,"string",5]
console.log(arr); //Prints the whole array
console.log(arr[0]); //prints first elements of array
console.log(arr[4],"-5th element of array");
*/

/*
//Operators in Javascript
// i. Arithmetic Operators
var a = 10;
var b = 2;
console.log("This is a+b",a+b);
console.log("This is a-b",a-b);
console.log("This is a/b",a/b);
console.log("This is a*b",a*b);
console.log("This is a**b",a**b);
console.log("This is a%b",a%b);
//  ii. Logical Operators
var c =b; 
c +=2; //increase value of C by 2: c = c + 2
console.log(c);
c -=2;
console.log(c);
c *=2;
console.log(c);
c /=2;
console.log(c); // value of b is assigned to c;
//Comparison Operators
var x = 34;
var y = 56;
console.log(x==y); // is x==y?
console.log(x>=y); //is x>=y: greater than or equal to
console.log(x<=y); //is x<=y: less than or equal to
console.log(x<y); //is x<y: less than 
console.log(x>y); //is x>y: greater than
//Logical Operators
console.log("Logical operators:");
console.log("AND");
console.log(true && true); //Logical operator and
console.log(true && false );
console.log(false && false);
console.log(true && false);
console.log("OR");
console.log(true || true); //Logical operator OR
console.log(true || false );
console.log(false || false); 
console.log(true || false);
console.log("Not");
console.log(!true); //not true
console.log(!false); //not false
*/

/*
// Functions in javascript
// DRY = Do not repeat yourself.
function sum(a,b){
    var c = (a+b);
    return c ;
}
let a,b,c;
a=10;
b=12;
c=sum(a,b);
console.log(c);
b=34;
c=sum(a,b);
console.log(c);
//Blue in console - number, Black in console - String
*/

/* 
//Conditionals in Javascript
var age = 60;
/*
    if(age > 18) //single if statement 
    {
        console.log("you are not a kid");
    }
    else{
        console.log("You are a kid");
    } //if - else statement block

//if else ladder
if(age > 2 && age < 7)
{
    console.log("Toddler");
}
else if(age > 13 && age <20)
{
    console.log("teenager");
}
else if(age > 26 && age <50)
{
    console.log("Middle age");
}
else{
    console.log("dont care");
}
*/

/*
//Loops in Javascript
var arr = [1, 2, 3, 4, 5, 6, 7];
console.log(arr);
var i;
for(i=0;i<7;i++)
{
    console.log(arr[i]);
}
// arr.forEach(function (element) {
//     console.log(element);
// })
let j = 0; //scope within the block
//const a = 0; //constant cant be updated , scope same as let
// while(j<arr.length)
// {
//     console.log(arr[j]);
//     j++;
// }
do{
    console.log(arr[j]); //do while loop runs atleast once
    j++;
}while(j<arr.length);
*/

/*
//Break and Continue Statement
//Can be used in any loop
var arr = [1, 2, 3, 4, 5, 6, 7];
console.log(arr);
var i;
console.log('break');
for(i=0;i<7;i++)
{
    if(i==2){
        break; //break the loop and move to the next statement after loop
    }
    console.log(arr[i]);
}
console.log('continue');
for(i=0;i<7;i++)
{
    if(i==2){
        continue; //exit this pass/iteration of the loop and move to the next one
    }
    console.log(arr[i]);
}
*/


/*
//Array methods
let arr =['abc', 'xyz', 100, null];
console.log(arr);
console.log(arr.length,"length of array");
arr.pop();
console.log(arr," pop Remove last element of array");
arr.push("Ani");
console.log(arr,"pushing an element in array");
arr.shift();
console.log(arr,"shift removes first element");
arr.unshift("garvit");
console.log(arr,"unshift adds element on the 1st position");
const newlen = arr.unshift('new');
console.log(arr);
console.log(newlen,"new length using unshift");
console.log(arr.toString(),"-array is now string using tostring");
console.log(arr.sort(),"array is now sorted"); //sort by converting all elements to string and then dictionary method is used to sort
//explore more array methods
*/

/*
//String methods in JS
let str = "Ani is a good girl. girl is awesome yaar,nice girl";
console.log(str.length,'length of string');
console.log(str.indexOf('girl'),'finding the (1st occurence)starting index of girl');
console.log(str.lastIndexOf('girl'),'last occurence of girl index returned.');
console.log(str.slice(0,3),'-3 chars starting from 0');
d = str.replace("Ani","aruni"); //replaces only 1st occurence
console.log(d);
//explore more methods of string
*/

/*
//Dates in JS
let mydate;
mydate = new Date(); //new keyword
console.log(mydate);
console.log(mydate.getTime());
console.log(mydate.getFullYear());
console.log(mydate.getDay());
console.log(mydate.getMinutes());
console.log(mydate.getHours());
//explore methods of date
*/


/*
//Document object model - DOM Manipulation
//DOM can be accessed through Document
//Methods of DOM help in html manipulation to create dynamic html
//1. .getElementById
let elem =document.getElementById('click');
// console.log(elem);
let el =document.getElementsByClassName('container');
// console.log(el);
// el[0].style.background='yellow'; //change in background
el[0].classList.add("bg-p");
el[0].classList.add('text'); //.remove removes the class 
// console.log(elem.innerHTML);
// console.log(elem.innerText);
// console.log(el[0].innerHTML);
// console.log(el[0].innerText);
tn = document.getElementsByTagName('div');
console.log(tn);
createdElement = document.createElement('p');
createdElement.innerText = "this is a created paragraph";
tn[0].appendChild(createdElement); //tn[0] - first div
createdElement2 = document.createElement('b');
createdElement2.innerText = "this is a bold created element"
tn[1].appendChild(createdElement2);
tn[0].replaceChild(createdElement2 , createdElement);
tn[0].removeChild(createdElement2); 
//explore more methods of document,childs

//query selector
sel = document.querySelector(".container")
console.log(sel); //selects first query w container class
sel2 = document.querySelectorAll(".container");
console.log(sel2); //selects all query w container class
//uses css selector as arguement
*/



// Events in javascript
// function clicked() {
//     document.getElementById("click").style.color = " red";
// }
// onchange	- An HTML element has been changed
// onclick -	The user clicks an HTML element
// onmouseover -	The user moves the mouse over an HTML element
// onmouseout -	The user moves the mouse away from an HTML element
// onkeydown- The user pushes a keyboard key
// onload -The browser has finished loading the page
// function mouse()
// {
//     alert("mouse over button 2");
// }
// let prev = document.querySelectorAll(".container")[1].innerHTML;
// container1.addEventListener('click',function(){
//     console.log("container 1 is clicked");
// })
// container1.addEventListener('mouseup',function(){
//     document.querySelectorAll(".container")[1].innerHTML = prev;
//     console.log("container 2 mouse up");
// })
// container1.addEventListener('mousedown',function(){
//     document.querySelectorAll(".container")[1].innerHTML = "<b> CLicked</b>"
//     console.log("container 2 mouse down is hovered");
// })


/*
//settimeout and setinterval 
//arrow function

function sum1(a,b)
{
    return a+b;
}
sum2 = (a,b) =>{
    return a+b;  //another way to write a function using arrow =>
}
logkaro = () => {
    console.log("mai hu log");
}
//schedules function
setTimeout(logkaro,5000) // 2nd argafter how many milliseconds u want to run
//set interval - repeatedly use
clr = setInterval(logkaro,1000);
//use clearinterval/timeout to cancel out - clea rinterval(clr)
*/

//JS local storage
//data to save in user computer as string
// localStorage.setItem('name','ani')
// console.log(localStorage.getItem('name'));

















