// This program take the input of electricity units and then calculate the amount of bill based on different condition.

let unit = Number(prompt("Enter number of units"));

let amount = 0;

if(unit > 400) {
    amount = (unit - 400) * 13;
    unit = 400;
}
if(unit > 200 && unit <= 400) {
    amount += (unit - 300) * 8;
    unit = 200;
}
if(unit > 100 && unit <= 200) {
    amount += (unit - 100) * 6;
}
amount += unit * 4;

console.log(amount);