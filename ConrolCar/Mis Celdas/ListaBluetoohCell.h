//
//  ListaBluetoohCell.h
//  ConrolCar
//
//  Created by Emili Marques  on 10/9/18.
//  Copyright © 2018 appdevelopment.es. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreBluetooth/CoreBluetooth.h>
#import <CoreGraphics/CoreGraphics.h>
#import <GameKit/GameKit.h>
#import <MultipeerConnectivity/MultipeerConnectivity.h>
#import <QuartzCore/QuartzCore.h>

@interface ListaBluetoohCell : UITableViewCell

@property(nonatomic, retain)IBOutlet UILabel*lblName;
@property(nonatomic, retain)IBOutlet UILabel*lblDescription;


@end
