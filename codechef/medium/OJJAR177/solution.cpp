import React from 'react';

function Text({ as: Element = 'p', children, className = '', ...props }) {
const combinedClasses = `text text--${Element} ${className}`.trim();

return (
<Element className={combinedClasses} {...props}>
{children}
</Element>
);
}

export default Text;