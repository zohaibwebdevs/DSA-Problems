// In this problem we have given an amount of money, and we have find that to how many banknote of different amount, like 1000, 500, 100, 50, 20, 10, and change of 5, 2, and 1, we can convert the given amount of money?

let amount = 4877;

if(amount >= 1000) {
    console.log("Notes of 1000: " + Math.floor(amount / 1000));
    amount %= 1000;
}
if(amount >= 500) {
    console.log("Notes of 500: " + Math.floor(amount / 500));
    amount %= 500;
}
if(amount >= 100) {
    console.log("Notes of 100: " + Math.floor(amount / 100));
    amount %= 100;
}
if(amount >= 50) {
    console.log("Notes of 50: " + Math.floor(amount / 50));
    amount %= 50;
}
if(amount >= 20) {
    console.log("Notes of 20: " + Math.floor(amount / 20));
    amount %= 20;
}
if(amount >= 10) {
    console.log("Notes of 10: " + Math.floor(amount / 10));
    amount %= 10;
}
if(amount >= 5) {
    console.log("Change of 5: " + Math.floor(amount / 5));
    amount %= 5;
}
if(amount >= 2) {
    console.log("Change of 2: " + Math.floor(amount / 2));
    amount %= 2;
}
if(amount === 1) {
    console.log("change of 1: " + amount);
}
