const boxes = document.querySelectorAll(".btn");
// document.querySelector();
// document.getElementById();
// document.getElementsByClassName();


// console.log(boxes);
var player = true; //player0 = true && player1 == false

const winner = [  
    [0,1,2,3,4,5],  //rows 
    [6,7,8,9,10,11],
    [12,13,14,15,16,17],
    [18,19,20,21,22,23],
    [24,25,26,27,28,29],
    [30,31,32,33,34,35],

    [0,6,12,18,24,30], //columns
    [1,7,13,19,25,31],
    [2,8,14,20,26,32],
    [3,9,15,21,27,33],
    [4,10,16,22,28,34],
    [5,11,17,23,29,35],

    [0,7,14,21,28,35], //diagonals
    [5,10,15,20,25,30]
]; 

function disablebtn(){
    for(var b of boxes){
        b.innerHTML = "";
        b.disabled = true;
    }
};
    function resetgame() {
      location.reload();
    }

function displayWinner(){
    for(let row of winner){
        var btn1=boxes[row[0]].innerHTML;
        var btn2=boxes[row[1]].innerHTML;
        var btn3=boxes[row[2]].innerHTML;
        var btn4=boxes[row[3]].innerHTML;
        var btn5=boxes[row[4]].innerHTML;
        var btn6=boxes[row[5]].innerHTML;
        if(btn1!=""&& btn2!="" && btn3!="" && btn4!=""&& btn5!="" && btn6!=""){
            if(btn1 === btn2 && btn2 === btn3 && btn3 === btn4 && btn4 === btn5 && btn5 ===btn6){
                // console.log("the winner is " + btn1)
                if(btn1 === "O"){
                    console.log("The winner is player O");
                }
                else{
                    console.log("The winner is player X");
                    
                }
                disablebtn();
            }
        }
    }
};

boxes.forEach((box)=>{
    box.addEventListener("click",()=>{
        if(player){
            // console.log(box.innerHTML);
            box.innerHTML = "O";
            player = false;
        }
        else{
            box.innerHTML = "X";
            player = true;
        }
        box.disabled = true;
        displayWinner();
    })
})