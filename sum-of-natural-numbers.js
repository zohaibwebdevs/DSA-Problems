// This program find the sum of n natural numbers

var n = Number(prompt("Enter a natural number"));

if(isNaN(n)) {
    console.log("Invalid number");
} else {
    if(n > 0) {
        let sum = 0;
        for(let i = 0; i <= n; i++) {
            sum += i;
        }
        console.log(sum);
    } else {
        console.log("Number should be positive and greater than 0");
    }
}