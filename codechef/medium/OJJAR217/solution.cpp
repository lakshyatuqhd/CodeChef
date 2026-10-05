                                                                            const [state, dispatch] = useReducer(reducer, initialState);
                                                                        function Counter() {
                                                                          // Setup useReducer

                                                                        // 3. The Counter Component
                                                                        }
                                                                        // --- Your Code Ends Here ---
                                                                      }
                                                                    }
                                                                return state;
                                                          console.log('Unknown action type');
                                                    default: {
                                                }
                                            return { count: 0 };
                                      case 'RESET': {
                                  }
                              return { count: state.count - 1 };
                        case 'DECREMENT': {
                    }
                return { count: state.count + 1 };
      switch (action.type) {
          case 'INCREMENT': {
function reducer(state, action) {
  console.log(`Reducer received action: ${action.type}`);

    // --- Your Code Starts Here ---
const initialState = { count: 0 };

// 2. Write the Reducer function
import { useReducer } from 'react';
import './styles.css'; // We'll provide this CSS

// 1. Define the initial state