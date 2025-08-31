// file: js_sum.js
// Intentional mistakes: space inside function name, missing closing brace

function calculateSum(arr) {
  let total = 0;
  for (let num of arr) {
    total += num;
  }
// } <- missing brace

let numbers = [1, 2, 3, 4, 5];
let result = calculate Sum(numbers);  // broken identifier
console.log("Sum in JavaScript:", result);
