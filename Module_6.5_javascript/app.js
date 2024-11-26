'use strict'

// 1) Grade Marking 

// let stdMarks = -88;

// if(stdMarks < 40 && stdMarks >=0) {
//     console.log('You are fail');
// }
// else if(stdMarks >= 40 && stdMarks < 50) {
//     console.log('Your grade is B');
// }
// else if(stdMarks >= 50 && stdMarks < 60) {
//     console.log('Your grade is C');
// }
// else if(stdMarks >= 60 && stdMarks < 70) {
//     console.log('Your grade is A-');
// }
// else if(stdMarks >=70 && stdMarks < 80) {
//     console.log('Your grade is A');
// }
// else if(stdMarks >= 80 && stdMarks <= 100) {
//     console.log('Your grade is A+');
// }
// else if(stdMarks < 0 || stdMarks > 100) {
//     console.log('Your marks is Invalid');
// } 

// ------------------------------------------------------------------

// 2) A number is even or odd 

// let num1 = 0;
// let num2 = 12;

// let checkNum = (num) => {
//     if(num==0) {
//         return 'Zero'
//     }
//     else if(num%2==0) {
//         return 'Even';
//     }
//     else return 'Odd';
// }

// let ans1 = checkNum(num1);
// let ans2 = checkNum(num2);
// console.log(num1, 'is a ', ans1);
// console.log(num2, 'is a ', ans2);

// ------------------------------------------------------------------


// 3) sorting 

// let arr = [11,2,3,1,9,6,8,10,7,5,4,19,12,20,13,15,14,18,17,16];
// for(let i=0; i<arr.length; i++) {
//     for(let j=i+1; j<arr.length; j++) {
//         if(arr[i]>arr[j]) {
//             let tmp = arr[i];
//             arr[i]=arr[j];
//             arr[j]=tmp;
//         }
//     }
// }

// console.log(arr);

// ------------------------------------------------------------------

// 4) Leap Year Check 
// let year1 = 2000;
// let year2 = 1700;

// let isLeapYear = (year) => {
//     if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
//         return 'Yes';
//     }
//     else return 'No';
// }

// let ans1 = isLeapYear(year1);
// let ans2 = isLeapYear(year2);
// console.log(ans1);
// console.log(ans2);

// ------------------------------------------------------------------

// 5) Divisible by 3 and 5
// let ans = []
// for(let i=1; i<=50; i++) {
//     if(i%3==0 && i%5==0) {
//         ans.push(i);
//     }
// }

// console.log(ans);


// ------------------------------------------------------------------

// 6) finding big name
// var friends = ["rahim", "karim", "abdul", "sadsd", "heroAlom"];

// let bigName = (friends) => {
//     let ans = friends[0];

//     for(let i=1; i<friends.length; i++) {
//         if(ans.length < friends[i].length) {
//             ans = friends[i];
//         }
//     }
//     return ans;
// }

// console.log(bigName(friends));

// ------------------------------------------------------------------

// 7) Only Unique Number Store
// var numbers = [1, 2, 3, 3, 4, 4, 5, 6, 7, 8, 9, 10, 10, 10, 10];
// let uniqueNumbers = []
// for(let i=0; i<numbers.length; i++) {
//     if(numbers[i]!=numbers[i+1]) {
//         uniqueNumbers.push(numbers[i]);
//     }
// }
// console.log(uniqueNumbers);

// ------------------------------------------------------------------

// 8) Finding Max Number 
// var numbers = [1, 2, 3, 3, 4, 4, 5, 6, 7, 8, 9, 10];
// let maxNumber = Math.max(...numbers);
// console.log(maxNumber);

// ------------------------------------------------------------------
// 9) Saving money function

// let payment = [900,2700,3400];
// let livingCost = 10000;

// const monthlySaving = (payment, cost) => {
//     let totalTax = 0;
//     let totalIncome = 0;
//     for(let i=0; i<payment.length; i++) {
//         totalIncome += payment[i];
//         if(payment[i]>=3000) {
//             let tax = payment[i]*(20/100);
//             totalTax += tax;
//         }
//     }
//     let saveMny = (totalIncome - totalTax);
//     saveMny -= livingCost;
//     if(saveMny < 0) {
//         return 'Earn More Money';
//     }
//     else return saveMny;
// }

// let result = monthlySaving(payment,livingCost);
// console.log(result);





