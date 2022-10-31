const secretNumber = Math.floor(Math.random() * 100) + 1;
console.log("secretNumber: ", secretNumber);

let number;
while (true) {
  number = Number(prompt("Guess a number?"));
  if (number === secretNumber) {
    alert("Congratulations!");
    break;
  } else if (number < secretNumber) {
    alert("Too small!");
  } else {
    alert("Too big!");
  }
}
