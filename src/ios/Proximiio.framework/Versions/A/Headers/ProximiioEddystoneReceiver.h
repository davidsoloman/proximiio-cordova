//
//  ProximiioEddystoneReceiver.h
//  Proximiio
//
//  Created by Marian Frische on 31.07.15.
//  Copyright (c) 2015 NavtureApps. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreBluetooth/CoreBluetooth.h>
#import "ProximiioEddystoneBeacon.h"

@class ProximiioEddystoneReceiver;

@protocol ProximiioEddystoneReceiverDelegate <NSObject>

- (void)proximiioEddystoneReceiver:(ProximiioEddystoneReceiver*)scanner foundBeacon:(ProximiioEddystoneBeacon*)beacon;

- (void)proximiioEddystoneReceiver:(ProximiioEddystoneReceiver*)scanner lostBeacon:(ProximiioEddystoneBeacon*)beacon;

- (void)proximiioEddystoneReceiver:(ProximiioEddystoneReceiver*)scanner updatedBeacon:(ProximiioEddystoneBeacon*)beacon;

@end


@interface ProximiioEddystoneReceiver : NSObject

@property (nonatomic, retain) id<ProximiioEddystoneReceiverDelegate> delegate;

- (void)start;
- (void)stop;

@end
