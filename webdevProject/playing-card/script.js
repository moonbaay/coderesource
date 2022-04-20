var deck=[];
var winnerDeck=[];
var suit = ["♠", "♣", "♥", "♦"];
var rank = ['A','2','3','4','5','6','7','8','9','10','J','Q','K'];

var createDeck =()=>{

    for(var i = 0; i<suit.length;i++){
        for(var j = 0; j<rank.length;j++){
            deck.push(rank[j]+suit[i]);
        }        
    }
    return deck;
};
function createWinnerDeck(){
    for(let i = 0; i<4;i++){
        for(let j = 0; i< 13;j++){
            winnerDeck.push(rank[j]+suit[i])
        }
    }
    return winnerDeck;
}
createWinnerDeck()
var shuffle =(shuffle_deck)=>{
    for(let i = 0;i<shuffle_deck.length;i++){
        var temp = shuffle_deck[i];
        var randomIndex = Math.floor(Math.random()*52);
        shuffle_deck[i] = shuffle_deck[randomIndex];
        shuffle_deck[randomIndex] = temp;
    }
}
var newDeck = createDeck();
// shuffle(newDeck);
// createWinnerDeck();
console.log(winnerDeck);

function showDeckElement() {
    shuffle(newDeck)
    for(let i = 0;i<deck.length;i++){
        const newElement = document.createElement('div');
        newElement.dataset.value = `${deck[i]}`;
        newElement.innerHTML =deck[i];
        document.querySelector('.container').appendChild(newElement);
        newElement.classList.add('card');
    
    }
}

// var randomNumber = Array.from(deck);
// function showWinningElement(){
//     shuffle(winnerDeck);
//     for(let i = 0;i<4;i++){
//     const newElement = document.createElement('div');
//     newElement.dataset.value = `${winnerDeck[i]}`;
//     newElement.innerHTML =winnerDeck[i];
//     document.querySelector('.winning-card-center').appendChild(newElement);
//     newElement.classList.add('winning-card');
        
//     }
    
// }
// showWinningElement();
showDeckElement();

function isMatch(selectCard, matchCard){
    return selectCard ==matchCard;
}

const selectCard = document.querySelectorAll('.card');

selectCard.forEach((item)=>{
    item.addEventListener('click',()=>{

        for(let i=0;i<4;i++){
           if(item.dataset.value == randomNumber[i]){
               console.log('congratulation')
           }else{
               console.log('sorry try again');
           }
        }

    })
})


// var randomNumber = Array.from({length:52}, ()=> Math.floor(Math.random() *52));
// console.log(winnerDeck)
