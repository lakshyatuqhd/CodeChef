import AccordionItem from './AccordionItem';

function Accordion({ items }) {
const [activeIndex, setActiveIndex] = useState(null);

const handleToggle = (index) => {
setActiveIndex((prevIndex) => (prevIndex === index ? null : index));
};

return (
<div className="accordion">
{items.map((item, index) => (
<AccordionItem
key={index}
title={item.title}
content={item.content}
isActive={activeIndex === index}
onClick={() => handleToggle(index)}
/>
))}
</div>
);
}

export default Accordion;
import { useState } from 'react';