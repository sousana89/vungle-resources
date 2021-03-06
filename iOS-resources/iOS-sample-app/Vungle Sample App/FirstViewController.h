//
//  FirstViewController.h
//  Vungle Sample App
//
//  Created by Jordyn Chuhaloff on 3/24/14.
//  Copyright (c) 2014 Jordyn Chuhaloff. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <VungleSDK/VungleSDK.h>

@interface FirstViewController : UIViewController

@property (strong) IBOutlet UIButton *showAdButton;
@property (strong) IBOutlet UIButton *showAdWithOptionsButton;

-(IBAction)showAd;

-(IBAction)showAdWithOptions;

-(void)checkPlay:(NSTimer*)timer;

@end
