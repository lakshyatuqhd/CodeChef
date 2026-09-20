const words = ["apple", "banana", "cherry", "watermelon", "kiwi"];
const longestWord = words.reduce((longest, current ) => {
    return current.length > longest.length ? current : longest;
});
console.log(longestWord);
// complete the code 



