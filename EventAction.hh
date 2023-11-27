#ifndef EventAction_HH
#define EventAction_HH

#include "G4UserEventAction.hh"
#include "globals.hh"

class EventAction : public G4UserEventAction
{
  public:
    EventAction() = default;
    ~EventAction() override = default;

    void  BeginOfEventAction(const G4Event* event) override;
    void  EndOfEventAction(const G4Event* event) override;

    void AddAbs(G4double de, G4double dl);
    void AddGap(G4double de, G4double dl);

  private:
    G4double  fEnergyAbs = 0.;
    G4double  fEnergyGap = 0.;
    G4double  fTrackLAbs = 0.;
    G4double  fTrackLGap = 0.;
};

// inline functions

inline void EventAction::AddAbs(G4double de, G4double dl) {
  fEnergyAbs += de;
  fTrackLAbs += dl;
}

inline void EventAction::AddGap(G4double de, G4double dl) {
  fEnergyGap += de;
  fTrackLGap += dl;
}

#endif


