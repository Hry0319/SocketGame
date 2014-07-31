package {
	import org.*;
	import flash.display.*;
	import flash.system.fscommand;
	import flash.display.MovieClip;
	import flash.display.Shape;
	import flash.display.Sprite;
	import flash.display.StageQuality;
	import flash.events.*;
	import flash.events.KeyboardEvent;
	import flash.utils.Timer;
	import flash.ui.Keyboard;
	import flash.display.BitmapData;
	import flash.display.DisplayObject;
	public class Main extends Sprite {
		var Players:Array;
		var arrayplace:int;
		public static var login:Boolean;
		public static var Mainstage:Stage;
		var Bullets:Array;
		var LOGINSCL:MovieClip;
		//var attackBullet:Bullet;
		public function Main() {
			//fscommand("SWF connect","OK~OK~");
			LOGINSCL=loginScene;
			Mainstage=stage;
			arrayplace=0;
			Bullets=new Array();
			Players=new Array(16);
			login=false;
			addEventListener(Event.ENTER_FRAME , _enterFrame);
			stage.addEventListener(KeyboardEvent.KEY_DOWN , _playerKeydown);
			
		}
		private function _enterFrame( event:Event ):void {
			
			if (login) {
				initial();
				Main.login=false;
				if (LOGINSCL!=null) {
					removeChild(LOGINSCL);
					LOGINSCL=null;
				}
				
				
			}
			/*if (! HitTest.complexHitTestObject(MovieClip(player),wall)) {
			
			}*/
			for each (var k in Players) {
				if (k.x>550) {
					k.HP-=5;
					k.x-=60;
				} else if (k.x<0) {
					k.HP-=5;
					k.x+=60;
				} else if (k.y>500) {
					k.HP-=5;
					k.y-=60;
				} else if (k.y<0) {
					k.HP-=5;
					k.y+=60;
				}
				if (k.HP<=0) {
					k.gotoAndStop(2);
				}
				
				if (Bullets.length>0) {
					for each (var uu in Bullets) {
						addChild(uu);
						if (k!=Players[0]) {
							if (HitTest.complexHitTestObject(uu,k)) {
								if (k.HP>0) {
									k.HP--;
									trace(k.HP);
									removeChild(uu);
									fscommand(k.playerName+"HP",k.HP);
								}
							}
						}
						if (uu.x>550||uu.y<0||uu.x<0||uu.y>500) {
							removeChild(uu);
						}
					}
				}
			}//for each
			
			
			
			
		}
		private function initial() {
			if (arrayplace<16) {
				var otherPlayer:Soldier = new Soldier();
				Players[arrayplace]=otherPlayer;
				Players[arrayplace].x=225;
				Players[arrayplace].y=200;
				addChild(Players[arrayplace]);
				//trace(Players[arrayplace].team);
				arrayplace++;
				trace(arrayplace);

			}
		}

		function _playerKeydown(evt:KeyboardEvent) {
			//trace(evt.keyCode);
			if (Players[0]!=null) {
				if (Players[0].HP>0) {
					if (evt.keyCode==38) {
						Players[0].y-=6;
						Players[0].rotation=0;
					} else if (evt.keyCode == 40) {
						Players[0].y+=6;
						Players[0].rotation=180;
					} else if (evt.keyCode == 37) {
						Players[0].x-=6;
						Players[0].rotation=270;
					} else if (evt.keyCode == 39) {
						Players[0].x+=6;
						Players[0].rotation=90;
					} else if (evt.keyCode == Keyboard.SPACE) {
						Players[0].attackBullet=new Bullet(Players[0].playerName);
						Players[0].attackBullet.rotation=Players[0].rotation;
						Players[0].attackBullet.x=Players[0].x;
						Players[0].attackBullet.y=Players[0].y;
						Bullets.push(Players[0].attackBullet);
					} else if (evt.keyCode == 96) {
						Main.login=true;
					}//測試用
				}
				fscommand("xsit "+Players[0].x,"ysit "+Players[0].y);
			}
		}
	}
}