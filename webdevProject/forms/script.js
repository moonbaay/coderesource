const fname = document.getElementById('fname');
const lname = document.getElementById('lname');
const signupBtn = document.getElementById('signup-submit');

var person =[];
const account =[
   { firstName: "",
     lastName:""
    }
]
signupBtn.addEventListener('click',()=>{
    const firstName = fname.value;
    const lastName = lname.value;

    person.push(`${firstName} ${lastName}`)
    console.log(person);
})

// const getId =()=>{
//     return Math.floor(Math.random() * 1000);
// }
// console.log(getId());