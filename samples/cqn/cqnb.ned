//
// This file is part of an OMNeT++/OMNEST simulation example.
//
// Copyright (C) 1992-2005 Andras Varga
//
// This file is distributed WITHOUT ANY WARRANTY. See the file
// `license' for details on this and other legal matters.
//


import "tandemqueue.ned";


//
// Closed Queueing Network, variant "B".
//
module ClosedQueueingNetB
    parameters:
        numTandems : numeric const,
        sDelay: numeric;
    submodules:
        tandemQueue: TandemQueue[numTandems];
            parameters:
                sDelay = sDelay,
                ownIndex = index;
            gatesizes:
                in[numTandems],
                out[numTandems];
            display: "i=misc/cloud2_l";
    connections nocheck:
        for i=0..numTandems-1, j=0..numTandems-1 do
            tandemQueue[i].out[j] --> delay sDelay --> tandemQueue[j].in[i] if i!=j;
        endfor;
endmodule


//
// Instantiates ClosedQueueingNetB.
//
network cqnB: ClosedQueueingNetB
endnetwork

