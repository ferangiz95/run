#ifndef PRIMARYGENERATORACTION_HH
#define PRIMARYGENERATORACTION_HH

#include "G4VUserPrimaryGeneratorAction.hh"
#include "globals.hh"
#include "G4Event.hh"

class G4GeneralParticleSource;
class G4Event;
class PrimaryGeneratorAction : public G4VUserPrimaryGeneratorAction
{
public:
PrimaryGeneratorAction();
~PrimaryGeneratorAction();
    
void GeneratePrimaries(G4Event* anEvent);

private:
G4GeneralParticleSource* gun;
};

#endif
