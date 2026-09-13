# VBHXB45

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Async Read, Filter, and Write

Let's create a program that asynchronously reads a list of fruits from a file named `fruits.txt`, filters out the fruits that start with the letter "b", and then writes the remaining fruits to a new file named `filtered_fruits.txt`.

The file named `fruits.txt` contains the following content:

```
apple
banana
orange
blueberry
grape

```

Here's how the code will work:

- Read the content of fruits.txt asynchronously.
- Split the content into an array of fruits (assuming each fruit is on a new line).
- Filter the array to keep only fruits that do not start with "b".
- Join the filtered array back into a string, with each fruit on a new line.
- Write the filtered string to filtered_fruits.txt asynchronously.

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-13T11:52:30.218Z  

```cpp
const outputFile = path.resolve(__dirname, 'filtered_fruits.txt');

console.log('Reading fruits.txt...');

fs.readFile(inputFile, 'utf8', (err, data) => {
    if (err) {
            return console.error('Error reading file:', err);
                }

                    const fruits = data.split('\n').map(fruit => fruit.trim());

                        const filtered = fruits.filter(fruit => !fruit.toLowerCase().startsWith('b'));

                            const result = filtered.join('\n');

                                console.log('Writing filtered fruits to filtered_fruits.txt...');

                                    fs.writeFile(outputFile, result, 'utf8', (err) => {
                                            if (err) {
                                                        return console.error('Error writing file:', err);
                                                                }

                                                                        console.log('Filtered fruits written successfully!');
                                                                            });
                                                                            });
```

---

[View on CodeChef](https://www.codechef.com/problems/VBHXB45)