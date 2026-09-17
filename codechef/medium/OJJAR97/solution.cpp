import React from "react";

function TextInput({ id, label, type = "text" }) {
  // Always call the hook unconditionally at the top level
    const generatedId = React.useId();
      // Fall back to the passed id if available
        const appliedId = id || generatedId;

          return (
              <div className="text-input">
                    <label htmlFor={appliedId}>{label}</label>
                          <input id={appliedId} type={type} className="input-field" />
                              </div>
                                );
                                }

                                export default function App() {
                                  return <TextInput id="input-id" label="Enter Text:" />;
                                  }