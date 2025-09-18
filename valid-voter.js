// If you want to run this code, link this js file with your html file and then open it in the browser, then you will see the result.

let ans = Number(prompt("What is your age?")); // Using Number function will prevent the user from putting something other than number.

if(isNaN(ans)) { // isNaN function check if the value of ans is NaN.
    console.log("Invalid Input");
} else if(ans >= 18) {
    console.log("You can vote!");
} else {
    console.log("You cannot vote.");
}
