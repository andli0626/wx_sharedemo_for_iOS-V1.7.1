//
//  ViewController.h
//  wx_auth_demo
//
//  Created by 李林 on 16/6/14.
//  Copyright © 2016年 李林. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "WXApi.h"

@interface ViewController : UIViewController<WXApiDelegate>

-(IBAction)clickAuthButton:(id)sender;
-(IBAction)clickShareButton:(id)sender;
@end

