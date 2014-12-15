//
//  ViewController.h
//  FbloginiOS
//
//  Created by Daniel Bernal on 12/15/14.
//  Copyright (c) 2014 Daniel Bernal. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <FacebookSDK/FacebookSDK.h>

@interface ViewController : UIViewController <FBLoginViewDelegate>

@property (weak, nonatomic) IBOutlet FBLoginView *loginView;

@end
