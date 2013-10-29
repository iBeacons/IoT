//
//  IBTTransmitViewController.h
//  iBeaconsTutorial
//
//  Created by Xia Mingjie on 13-10-29.
//  Copyright (c) 2013年 dev2x.biz. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>
#import <CoreBluetooth/CoreBluetooth.h>

@interface IBTTransmitViewController : UIViewController <CBPeripheralManagerDelegate>

@property (weak, nonatomic) IBOutlet UILabel *uuidLabel;
@property (weak, nonatomic) IBOutlet UILabel *majorLabel;
@property (weak, nonatomic) IBOutlet UILabel *minorLabel;
@property (weak, nonatomic) IBOutlet UILabel *identityLabel;

@end
