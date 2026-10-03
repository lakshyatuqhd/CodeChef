import React from 'react';
import { useTheme } from './ThemeContext';

export function Header() {
  const { theme, toggleTheme } = useTheme();
    return (
        <header style={{ 
              backgroundColor: theme === 'light' ? 'white' : 'black', 
                    color: theme === 'light' ? 'black' : 'white',
                          padding: '20px'
                              }}>
                                    <button onClick={toggleTheme}>
                                            {theme === 'light' ? 'Switch to Dark Mode' : 'Switch to Light Mode'}
                                                  </button>
                                                      </header>
                                                        );
                                                        }
                                                        export default Header;