var user_continue = true;
var user_correct = false;

while(user_continue) {

var random_number = Math.random() * 100;

while(user_correct != true) {
  var user_guess = prompt("Guess a number between 1 - 100: ");
  
  if (user_guess === random_number) {
    alert(`Congrats! The number was ${random_number}`);
    user_correct = true;
    break;
  } else if (user_guess > random_number) {
    alert("Your guess was too high!");
  } else {
    alert("Your guess was too low!");
  }
}


var user_input = prompt("Do you want to continue? Input 'Yes' or 'No': ");
  if(user_input === "Yes") {
    break;
  } else {
    user_continue = false;
  }
}
