// This program find the factoril of number

let pr = prompt("Enter a natural number");

if (pr === null) {
  console.log("canceled");
} else {
  let n = Number(pr);

  if (isNaN(n)) {
    console.log("Invalid number");
  } else {
    if (n > 0) {
      let fact = 1;
      for (let i = 1; i <= n; i++) {
        fact *= i;
      }
      console.log(fact);
    } else {
      console.log("Number should be positive and greater than 0");
    }
  }
}
