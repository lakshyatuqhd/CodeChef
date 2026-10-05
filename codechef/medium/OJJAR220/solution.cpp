                  };

                    return (
                        <div>
                              <h1>React Portal Demo App</h1>
                                    <p>
                                            This button is part of the main application rendered inside #root.
                                                    Clicking it will open a modal.
                                                          </p>
                                                                <button onClick={handleOpenModal}>Open Modal</button>

                                                                      <p style={{ marginTop: '20px' }}>
                                                                              Notice the light gray background? That's the #root div.
                                                                                      If you inspect the elements, the modal will appear OUTSIDE this div,
                                                                                              directly inside the body (in #modal-root).
                                                                                                    </p>

                                                                                                          {isModalOpen && (
                                                                                                                  <Modal onClose={handleCloseModal} title="My Portal Modal">
                                                                                                                            <p>This modal is rendered using a React Portal!</p>
                                                                                                                                      <p>It lives in #modal-root, not in #root.</p>
            const handleCloseModal = () => {
                setIsModalOpen(false);

          };

function App() {
  const [isModalOpen, setIsModalOpen] = useState(false);

    const handleOpenModal = () => {
        setIsModalOpen(true);
import { useState } from 'react';
import Modal from './Modal';