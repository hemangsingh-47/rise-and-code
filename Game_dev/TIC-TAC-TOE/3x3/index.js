var player1=prompt("enter your name:");
console.log(player1);

var player2=prompt("enter your name:");
console.log(player2);
const boxes = document.querySelectorAll(".box");
 //    document.getElementsByClassName

// const win1 = document.querySelectorAll(".win");

let turn = true; //player0 ->"o",player1 ->false ->"x"

// true -> binary num (1) && false -> binary (0)

console.log(boxes);

const winner = [
    [0, 3, 6],
    [1, 4, 7],
    [2, 5, 8],
    [0, 1, 2],
    [3, 4, 5],
    [6, 7, 8],
    [0, 4, 8],
    [2, 4, 6],
];

function checkwinner() {

                    // for of loop
    for (let row of winner) {
        const btn1 = boxes[row[0]].innerHTML;
        const btn2 = boxes[row[1]].innerHTML;
        const btn3 = boxes[row[2]].innerHTML;

        if (btn1 != "" && btn2 != "" && btn3 != "") {
            if (btn1 === btn2 && btn2 === btn3) {
                // console.log("The Winner is " + btn1);
                // for (box of boxes) {
                //     box.disabled = "true";
                 if (btn1 === "O") {
    console.log("the winner is :"+ player1);
} else {
    console.log("the winner is :"+ player2);
}

for (var box of boxes) {
    box.disabled = true;
}
                 
            }
        }
    }
};

                 // for each loop = call array(boxes)

                //  box=variable
boxes.forEach((box) => {
    // console.log(box.innerHTML);

    box.addEventListener("click", () => {
        // console.log(box.innerHTML);

        if (turn) {
            box.innerHTML = "O";
            turn = false; // turn of next player
        }
        else {
            box.innerHTML = "X";
            turn = true; // turn of next player
        }
        box.disabled = false;
          //disable is in built -> button ->enable or desable 
        //   by default false  he  taki barr click ho sake 
        checkwinner();
        
    });
});

function restartGame() {
  boxes.forEach((box) => {
    box.innerHTML = "";
    box.disabled = false;
    box.classList.remove("winner");
  });
 
  
}

// // Ask names and save them to local storage
// var player1 = prompt("Enter Player 1 name:");
// localStorage.setItem("player1", player1);

// var player2 = prompt("Enter Player 2 name:");
// localStorage.setItem("player2", player2);

// // Retrieve from local storage (in case of refresh)
// player1 = localStorage.getItem("player1");
// player2 = localStorage.getItem("player2");

// const boxes = document.querySelectorAll(".box");

// let turn = true; // true -> O (player1), false -> X (player2)

// const winner = [
//   [0, 3, 6],
//   [1, 4, 7],
//   [2, 5, 8],
//   [0, 1, 2],
//   [3, 4, 5],
//   [6, 7, 8],
//   [0, 4, 8],
//   [2, 4, 6],
// ];

// function checkwinner() {
//   for (let row of winner) {
//     const btn1 = boxes[row[0]].innerHTML;
//     const btn2 = boxes[row[1]].innerHTML;
//     const btn3 = boxes[row[2]].innerHTML;

//     if (btn1 !== "" && btn2 !== "" && btn3 !== "") {
//       if (btn1 === btn2 && btn2 === btn3) {
//         if (btn1 === "O") {
//           console.log("🏆 The winner is: " + player1);
//         } else {
//           console.log("🏆 The winner is: " + player2);
//         }

//         for (let box of boxes) {
//           box.disabled = true;
//         }
//       }
//     }
//   }
// }

// boxes.forEach((box) => {
//   box.addEventListener("click", () => {
//     if (turn) {
//       box.innerHTML = "O";
//       turn = false;
//     } else {
//       box.innerHTML = "X";
//       turn = true;
//     }
//     box.disabled = true;
//     checkwinner();
//   });
// });

// function restartGame() {
//   boxes.forEach((box) => {
//     box.innerHTML = "";
//     box.disabled = false;
//     box.classList.remove("winner");
//   });
// }
