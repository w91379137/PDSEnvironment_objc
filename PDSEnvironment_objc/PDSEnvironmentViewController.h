//
//  PDSEnvironmentViewController.h
//  PDSEnvironment_objcDemo
//
//  Created by w91379137 on 2016/4/6.
//  Copyright © 2016年 w91379137. All rights reserved.
//

#import <UIKit/UIKit.h>
#define envc [PDSEnvironmentViewController sharedInstance]

@interface PDSEnvironmentViewController : UIViewController

+ (instancetype)sharedInstance;
@property (strong, nonatomic) UIViewController *rootViewController;

@end
