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
		var obj:Object;
		var Players:Array;
		var list:Array;
		var arrayplace:int;
		var Bullets:Array;
		var strName:String;
		var loginitf:MovieClip;
		public static var login:Boolean;
		public static var Clientlogin:Boolean;
		public static var Mainstage:Stage;



		public function Main() {
			//fscommand("SWF connect","OK~OK~");
			Main.Clientlogin=true;
			strName="";
			Mainstage=stage;
			arrayplace=0;
			Bullets=new Array();
			Players=new Array(16);
			login=false;
			Clientlogin=true;
			addEventListener(Event.ENTER_FRAME , _enterFrame);
			stage.addEventListener(KeyboardEvent.KEY_DOWN , _playerKeydown);
			loginitf = new loginInterface();
			loginitf.x=450;
			loginitf.y=10;
			addChild(loginitf);
			loginitf.btn.addEventListener(MouseEvent.CLICK, btnOnClick);
			//initial("");

			//fscommand("det","");
		}

		function initial(strName:String) {
			if (arrayplace<16) {
				Players[arrayplace]=new Soldier(strName);
				list[arrayplace]=strName;
				Players[arrayplace].x=50+Math.random()*450;
				Players[arrayplace].y=Math.random()*400;
				addChild(Players[arrayplace]);
				arrayplace++;
				trace(arrayplace);
			}
		}
		function btnOnClick(evt:MouseEvent):void {
			if (Main.Clientlogin) {
				fscommand("u01", loginitf._input.text);
				Main.Clientlogin=false;
			}

		}
		private function _enterFrame( event:Event ):void {
			obj=root.loaderInfo.parameters;
			if (obj.qq!=null) {
				if (obj.qq=="true") {
					if (obj.key=="new") {
						initial(obj.socketVar);
					}
					if (obj.key=="sit") {
						for each (var k2 in Players) {
							if (k2.playerName==obj.name) {
								k2.x=Number(obj.X);
								k2.y=Number(obj.Y);
							}
						}
					}
					if (obj.key=="det") {
						var ad:Boolean=true;
						if (list.indexOf(obj.socketVar)!=-1) {
							ad=false;
						}
						if (ad) {
							initial(obj.socketVar);
						}
					}

					fscommand("got","");
				}
			}
			fscommand("det","");
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
									//fscommand(k.playerName+"HP",k.HP);
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
		function _playerKeydown(evt:KeyboardEvent) {
			//trace(evt.keyCode);
			if (Players[0]!=null) {
				if (Players[0].HP>0) {
					if (evt.keyCode==38) {
						Players[0].y-=6;
						Players[0].rotation=0;
						fscommand("u02",Players[0].x+","+Players[0].y+","+Players[0].playerName);
					} else if (evt.keyCode == 40) {
						Players[0].y+=6;
						Players[0].rotation=180;
						fscommand("u02",Players[0].x+","+Players[0].y+","+Players[0].playerName);
					} else if (evt.keyCode == 37) {
						Players[0].x-=6;
						Players[0].rotation=270;
						fscommand("u02",Players[0].x+","+Players[0].y+","+Players[0].playerName);
					} else if (evt.keyCode == 39) {
						Players[0].x+=6;
						Players[0].rotation=90;
						fscommand("u02",Players[0].x+","+Players[0].y+","+Players[0].playerName);
					} else if (evt.keyCode == Keyboard.SPACE) {
						Players[0].attackBullet=new Bullet(Players[0].playerName);
						Players[0].attackBullet.rotation=Players[0].rotation;
						Players[0].attackBullet.x=Players[0].x;
						Players[0].attackBullet.y=Players[0].y;
						Bullets.push(Players[0].attackBullet);

					} else if (evt.keyCode == 96) {
						initial("");
					}
				}
				//測試用
			}

		}
	}
}