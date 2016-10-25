/*----------------------
   Copyright (C): OpenGATE Collaboration

This software is distributed under the terms
of the GNU Lesser General  Public Licence (LGPL)
See GATE/LICENSE.txt for further details
----------------------*/

/*
  \class  GateNTLEDoseActorMessenger
  \authors: Halima Elazhar (halima.elazhar@ihpc.cnrs.fr)
            Thomas Deschler (thomas.deschler@iphc.cnrs.fr)
*/

#ifndef GATENTLEDOSEACTORMESSENGER_HH
#define GATENTLEDOSEACTORMESSENGER_HH

#include "G4UIcmdWithABool.hh"
#include "GateImageActorMessenger.hh"

class GateNTLEDoseActor;
class GateNTLEDoseActorMessenger : public GateImageActorMessenger
{
  public:
    GateNTLEDoseActorMessenger(GateNTLEDoseActor*);
    virtual ~GateNTLEDoseActorMessenger();

    void BuildCommands(G4String);
    void SetNewValue(G4UIcommand*, G4String);

  protected:
    GateNTLEDoseActor* pDoseActor;

    G4UIcmdWithABool* pEnableDoseCmd;
    G4UIcmdWithABool* pEnableDoseSquaredCmd;
    G4UIcmdWithABool* pEnableDoseUncertaintyCmd;
    G4UIcmdWithABool* pEnableDoseCorrectionCmd;
    G4UIcmdWithABool* pEnableDoseCorrectionTLECmd;
    G4UIcmdWithABool* pEnableKermaFactorDumpCmd;
    G4UIcmdWithABool* pEnableKillSecondaryCmd;
};

#endif
