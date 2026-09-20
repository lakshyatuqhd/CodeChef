    return newBoard;
  }
  const [r, c] = emptyTiles[getRandomInt(emptyTiles.length)];
  newBoard[r][c] = Math.random() < 0.9 ? 2 : 4;
  return newBoard;
        emptyTiles.push([r, c]);
      }
    }
  }
  if (emptyTiles.length === 0) {
    for (let c = 0; c < SIZE; c++) {
      if (newBoard[r][c] === 0) {
  const emptyTiles = [];
  for (let r = 0; r < SIZE; r++) {
function addRandomTile(board) {
  const newBoard = board.map(row => [...row]);
}

function getRandomInt(max) {
  return Math.floor(Math.random() * max);

}
function getEmptyBoard() {
  return Array(SIZE).fill(null).map(() => Array(SIZE).fill(0));

const SIZE = 4;
// (Previous code for SIZE, getEmptyBoard, getRandomInt, addRandomTile remains the same)

import './App.css';
import { useState, useEffect } from 'react'; // useEffect is crucial here