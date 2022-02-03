function reverseString(str) {
    // Write your code here
    let result = str.split("");
    result = result.reverse();
    result = result.join("");
    return result;
}


// Method 2
// function reverseString(str) {
    // Write your code here
    // return str.split("").reverse().join("");
// }