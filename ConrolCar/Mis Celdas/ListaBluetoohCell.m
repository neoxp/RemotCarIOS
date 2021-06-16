//
//  ListaBluetoohCell.m
//  ConrolCar
//
//  Created by Emili Marques  on 10/9/18.
//  Copyright © 2018 appdevelopment.es. All rights reserved.
//

#import "ListaBluetoohCell.h"

@implementation ListaBluetoohCell

@synthesize lblDescription,lblName;

- (void)awakeFromNib {
    [super awakeFromNib];
    self.lblName.text = lblName.description;
    self.lblDescription.text = lblDescription.description;
}

- (void)setSelected:(BOOL)selected animated:(BOOL)animated {
    [super setSelected:selected animated:animated];

    // Configure the view for the selected state
}

@end
