    <div className="App">
      <h1>Job Application Form</h1>
      {/* 2. Add the onTabClick prop and pass the handler */}
      <Tabs
        activeTabIndex={activeTabIndex}
        onNext={handleNext}
        onPrevious={handlePrevious}
  return (
  // 1. Define handleTabClick function
  const handleTabClick = (index) => {
    // Directly set the active tab index based on the clicked header's index
    setActiveTabIndex(index);
  };


  const handlePrevious = () => {
    setActiveTabIndex((prevIndex) => Math.max(prevIndex - 1, 0));
  };
  };


  const handleNext = () => {
    setActiveTabIndex((prevIndex) => Math.min(prevIndex + 1, totalTabs - 1));
  const [activeTabIndex, setActiveTabIndex] = useState(0);
  const totalTabs = 3;

function App() {
import './App.css';
import { useState } from 'react';
import Tabs from './Tabs';