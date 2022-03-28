// Language: javascript
// scramble a key, make a vector of 100 random numbers, print the vector, encrypt the vector with the cipher, print the encrypted vector, decrypt the vector with the cipher, print the decrypted vector
// Language: javascript
// Path: copilot/src/js/iterate.js
// Compare this snippet from copilot/src/js/scramble.js:
// //scramble a key, make a vector of 100 random numbers, print the vector, encrypt the vector with the cipher, print the encrypted vector, decrypt the vector with the cipher, print the decrypted vector

var scramble = function(key) {
  var vector = [];
  var cipher = [];
  var i, r;
  for (i = 0; i < 100; i++) {
    r = Math.random();
    vector.push(r);
  }
  for (i = 0; i < vector.length; i++) {
    cipher.push(vector[i] * key);
  }
  console.log(vector);
  console.log(cipher);
  for (i = 0; i < cipher.length; i++) {
    cipher[i] = cipher[i] / key;
  }
  console.log(cipher);
};
scramble(2);
scramble(3);
scramble(4);
scramble(5);
// Language: javascript
// Path: copilot/src/js/iterate.js
// Compare this snippet from copilot/src/js/iterate.js:
// //iterate over an array of numbers, print the numbers, print the sum of the numbers, print the average of the numbers

var iterate = function(array) {
  var i;
  var sum = 0;
  for (i = 0; i < array.length; i++) {
    sum += array[i];
  }
  console.log(array);
  console.log(sum);
  console.log(sum / array.length);
};
iterate([2, 3, 5, 7, 11]);
iterate([2, 3, 5, 7, 11, 13, 17, 19, 23, 29]);
iterate([2, 3, 5, 7, 11,]);